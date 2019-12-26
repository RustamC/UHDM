/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   module.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef MODULE_H
#define MODULE_H

namespace UHDM {

  class module : public BaseClass {
  public:
    module(){}
    ~module() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(int data) { uhdmParentType_ = data; }

    std::string get_vpiName() const { return SymbolFactory::getSymbol(vpiName_); }

    void set_vpiName(std::string data) { vpiName_ = SymbolFactory::make(data); }

    bool get_vpiTopModule() const { return vpiTopModule_; }

    void set_vpiTopModule(bool data) { vpiTopModule_ = data; }

    int get_vpiDefDecayTime() const { return vpiDefDecayTime_; }

    void set_vpiDefDecayTime(int data) { vpiDefDecayTime_ = data; }

    instance_array* get_instance_array() const { return instance_array_; }

    void set_instance_array(instance_array* data) { instance_array_ = data; }

    const VectorOfscope* get_scope() const { return scope_; }

    void set_scope(VectorOfscope* data) { scope_ = data; }

    const VectorOfprocess* get_process() const { return process_; }

    void set_process(VectorOfprocess* data) { process_ = data; }

    const VectorOfprimitive* get_primitive() const { return primitive_; }

    void set_primitive(VectorOfprimitive* data) { primitive_ = data; }

    const VectorOfprimitive_array* get_primitive_array() const { return primitive_array_; }

    void set_primitive_array(VectorOfprimitive_array* data) { primitive_array_ = data; }

    clocking_block* get_global_clocking() const { return global_clocking_; }

    void set_global_clocking(clocking_block* data) { global_clocking_ = data; }

    clocking_block* get_default_clocking() const { return default_clocking_; }

    void set_default_clocking(clocking_block* data) { default_clocking_ = data; }

    const VectorOfport* get_ports() const { return ports_; }

    void set_ports(VectorOfport* data) { ports_ = data; }

    const VectorOfinterface* get_interfaces() const { return interfaces_; }

    void set_interfaces(VectorOfinterface* data) { interfaces_ = data; }

    const VectorOfinterface_array* get_interface_arrays() const { return interface_arrays_; }

    void set_interface_arrays(VectorOfinterface_array* data) { interface_arrays_ = data; }

    const VectorOfcont_assign* get_cont_assigns() const { return cont_assigns_; }

    void set_cont_assigns(VectorOfcont_assign* data) { cont_assigns_ = data; }

    const VectorOfmodule* get_modules() const { return modules_; }

    void set_modules(VectorOfmodule* data) { modules_ = data; }

    const VectorOfmodule_array* get_module_array() const { return module_array_; }

    void set_module_array(VectorOfmodule_array* data) { module_array_ = data; }

    const VectorOfmod_path* get_mod_path() const { return mod_path_; }

    void set_mod_path(VectorOfmod_path* data) { mod_path_ = data; }

    const VectorOftchk* get_tchk() const { return tchk_; }

    void set_tchk(VectorOftchk* data) { tchk_ = data; }

    const VectorOfdef_param* get_def_param() const { return def_param_; }

    void set_def_param(VectorOfdef_param* data) { def_param_ = data; }

    const VectorOfio_decl* get_io_decl() const { return io_decl_; }

    void set_io_decl(VectorOfio_decl* data) { io_decl_ = data; }

    const VectorOfalias_stmt* get_alias_stmt() const { return alias_stmt_; }

    void set_alias_stmt(VectorOfalias_stmt* data) { alias_stmt_ = data; }

    const VectorOfclocking_block* get_clocking_block() const { return clocking_block_; }

    void set_clocking_block(VectorOfclocking_block* data) { clocking_block_ = data; }

  private:
    
    BaseClass* vpiParent_;

    int uhdmParentType_;

    unsigned int vpiName_;

    bool vpiTopModule_;

    int vpiDefDecayTime_;

    instance_array* instance_array_;

    VectorOfscope* scope_;

    VectorOfprocess* process_;

    VectorOfprimitive* primitive_;

    VectorOfprimitive_array* primitive_array_;

    clocking_block* global_clocking_;

    clocking_block* default_clocking_;

    VectorOfport* ports_;

    VectorOfinterface* interfaces_;

    VectorOfinterface_array* interface_arrays_;

    VectorOfcont_assign* cont_assigns_;

    VectorOfmodule* modules_;

    VectorOfmodule_array* module_array_;

    VectorOfmod_path* mod_path_;

    VectorOftchk* tchk_;

    VectorOfdef_param* def_param_;

    VectorOfio_decl* io_decl_;

    VectorOfalias_stmt* alias_stmt_;

    VectorOfclocking_block* clocking_block_;

  };

  class moduleFactory {
  friend Serializer;
  public:
  static module* make() {
    module* obj = new module();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<module*> objects_;
  };
 	      
  class VectorOfmoduleFactory {
  friend Serializer;
  public:
  static std::vector<module*>* make() {
    std::vector<module*>* obj = new std::vector<module*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<module*>*> objects_;
  };

};

#endif

