set(hdrs SpurRTC.h
    PARENT_SCOPE
    SpurSVC_impl.h
    )

install(FILES ${hdrs} DESTINATION ${INC_INSTALL_DIR}/${PROJECT_NAME_LOWER}
    COMPONENT library)

