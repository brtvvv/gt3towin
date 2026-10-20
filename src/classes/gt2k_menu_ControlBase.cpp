struct CtlMember { char d[0x134]; CtlMember(); ~CtlMember(); };
namespace gt2k_menu {
class ControlBase {
public:
    CtlMember m0;
    CtlMember m134;
    int x268, x26c, x270, x274, x278, x27c, x280, x284;
    ControlBase();
    virtual ~ControlBase();
    virtual void vf1();
};
// @__Q29gt2k_menu11ControlBase 0x1CC8F0
ControlBase::ControlBase() {
    x268 = 0; x26c = 0; x270 = 0; x274 = 0; x278 = 0; x27c = 0; x280 = 0; x284 = 0;
}
}
