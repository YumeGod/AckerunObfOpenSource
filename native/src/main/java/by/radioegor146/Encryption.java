package by.radioegor146;

import sun.misc.BASE64Decoder;
import sun.misc.BASE64Encoder;

import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.SecretKeySpec;
import java.security.Key;
import java.security.SecureRandom;

/**
 * 基础加密组件
 *
 * @author RedTea
 * @version 1.0
 * @since 1.0
 */
public abstract class Encryption {
    public static final String ALGORITHM = "AES";

    /**
     * 转换密钥<br>
     *
     * @param key
     * @return
     * @throws Exception
     */
    private static Key toKey(byte[] key) {
        try {
            if (ALGORITHM.equals("AES")) {
                SecretKey secretKey = new SecretKeySpec(key, ALGORITHM);
                return secretKey;
            } else if (ALGORITHM.equals("DES")) {
                DESKeySpec dks = new DESKeySpec(key);
                SecretKeyFactory keyFactory = SecretKeyFactory.getInstance(ALGORITHM);
                SecretKey secretKey = keyFactory.generateSecret(dks);
                return secretKey;
            }
            SecretKey secretKey = new SecretKeySpec(key, ALGORITHM);
            return secretKey;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    /**
     * 解密
     *
     * @param data
     * @param key
     * @return
     * @throws Exception
     */
    public static byte[] decrypt(String data, String key) {
        try {
            Key k = toKey(decryptBASE64(key));
            Cipher cipher = Cipher.getInstance(ALGORITHM);
            cipher.init(Cipher.DECRYPT_MODE, k);
            byte[] bytes = decryptBASE64(data);
            return cipher.doFinal(bytes);
        } catch (Exception e) {
            return "error".getBytes();
        }
    }

    /**
     * 加密
     *
     * @param data
     * @param key
     * @return
     * @throws Exception
     */
    public static String encrypt(byte[] data, String key) {
        try {
            Key k = toKey(decryptBASE64(key));
            Cipher cipher = Cipher.getInstance(ALGORITHM);
            cipher.init(Cipher.ENCRYPT_MODE, k);
//            byte[] d = decryptBASE64(data);
            return encryptBASE64(cipher.doFinal(data));
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    /**
     * 生成密钥
     *
     * @return
     * @throws Exception
     */
    public static String initKey() {
        try {
            return initKey(null);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    /**
     * 生成密钥
     *
     * @param seed
     * @return
     * @throws Exception
     */
    public static String initKey(String seed) {
        try {
            SecureRandom secureRandom = null;

            if (seed != null) {
                secureRandom = new SecureRandom(decryptBASE64(seed));
            } else {
                secureRandom = new SecureRandom();
            }

            KeyGenerator kg = KeyGenerator.getInstance(ALGORITHM);
            kg.init(secureRandom);

            SecretKey secretKey = kg.generateKey();

            return encryptBASE64(secretKey.getEncoded());
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    /**
     * BASE64解密
     *
     * @param key
     * @return
     * @throws Exception
     */
    public static byte[] decryptBASE64(String key) {
        try {
            return (new BASE64Decoder()).decodeBuffer(key);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    /**
     * BASE64加密
     *
     * @param key
     * @return
     * @throws Exception
     */
    public static String encryptBASE64(byte[] key) {
        try {
            return (new BASE64Encoder()).encodeBuffer(key);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }
}