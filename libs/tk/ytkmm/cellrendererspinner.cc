// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/cellrendererspinner.h>
#include <ytkmm/private/cellrendererspinner_p.h>

#include <ytk/ytk.h>

// -*- c++ -*-

/*
 *
 * Copyright 2009 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::CellRendererSpinner* wrap(GtkCellRendererSpinner* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRendererSpinner *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRendererSpinner_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRendererSpinner_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_spinner_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CellRendererSpinner_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CellRendererSpinner_Class::wrap_new(GObject* o)
{
  return manage(new CellRendererSpinner((GtkCellRendererSpinner*)(o)));

}


/* The implementation: */

CellRendererSpinner::CellRendererSpinner(const Glib::ConstructParams& construct_params)
:
  Gtk::CellRenderer(construct_params)
{
  }

CellRendererSpinner::CellRendererSpinner(GtkCellRendererSpinner* castitem)
:
  Gtk::CellRenderer((GtkCellRenderer*)(castitem))
{
  }

CellRendererSpinner::~CellRendererSpinner()
{
  destroy_();
}

CellRendererSpinner::CppClassType CellRendererSpinner::cellrendererspinner_class_; // initialize static member

GType CellRendererSpinner::get_type()
{
  return cellrendererspinner_class_.init().get_type();
}


GType CellRendererSpinner::get_base_type()
{
  return gtk_cell_renderer_spinner_get_type();
}


CellRendererSpinner::CellRendererSpinner()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::CellRenderer(Glib::ConstructParams(cellrendererspinner_class_.init()))
{
  

}


Glib::PropertyProxy< bool > CellRendererSpinner::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}

Glib::PropertyProxy_ReadOnly< bool > CellRendererSpinner::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}

Glib::PropertyProxy< guint > CellRendererSpinner::property_pulse() 
{
  return Glib::PropertyProxy< guint >(this, "pulse");
}

Glib::PropertyProxy_ReadOnly< guint > CellRendererSpinner::property_pulse() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "pulse");
}

Glib::PropertyProxy< Gtk::IconSize > CellRendererSpinner::property_size() 
{
  return Glib::PropertyProxy< Gtk::IconSize >(this, "size");
}

Glib::PropertyProxy_ReadOnly< Gtk::IconSize > CellRendererSpinner::property_size() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::IconSize >(this, "size");
}


} // namespace Gtk


