package by.radioegor146.source;

import by.radioegor146.Util;

import java.util.ArrayList;
import java.util.List;

public class CMakeFilesBuilder {

    private final String projectName;
    private final List<String> classFiles;
    private final List<String> mainFiles;

    public CMakeFilesBuilder(String projectName) {
        this.projectName = projectName;
        classFiles = new ArrayList<>();
        mainFiles = new ArrayList<>();
    }

    public void addClassFile(String classFile) {
        classFiles.add(classFile);
    }

    public void addMainFile(String mainFile) {
        mainFiles.add(mainFile);
    }

    public String build() {
        String template = Util.readResource("sources/CMakeLists.txt");
        return Util.dynamicFormat(template, Util.createMap(
                "classfiles", String.join(" ", classFiles),
                "mainfiles", String.join(" ", mainFiles),
                "projectname", projectName
        ));
    }
}
