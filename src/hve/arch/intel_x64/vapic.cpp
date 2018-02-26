//
// Bareflank Extended APIs
//
// Copyright (C) 2018 Assured Information Security, Inc.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

//#include <bfdebug.h>
//#include <intrinsics.h>
//
//#include "../../../../../include/vic/arch/intel_x64/vapic/vpic.h"
//
//namespace intel = eapis::intel_x64;
//
//intel::apic::apic()
//{
//    // bfdebug << intel_x64::msrs::ia32_x2apic_apicid::get() << bfendl;
//}
//
//uint32_t
//intel::apic::id() const
//{ return m_vapic_page.at(0x020); }
//
//void
//intel::apic::set_id(uint32_t val)
//{ m_vapic_page.at(0x020) = val; }
//
//uint32_t
//intel::apic::version() const
//{ return m_vapic_page.at(0x030); }
//
//void
//intel::apic::set_version(uint32_t val)
//{ m_vapic_page.at(0x030) = val; }
//
//uint32_t
//intel::apic::task_priority() const
//{ return m_vapic_page.at(0x080); }
//
//void
//intel::apic::set_task_priority(uint32_t val)
//{ m_vapic_page.at(0x080) = val; }
//
//uint32_t
//intel::apic::processor_priority() const
//{ return m_vapic_page.at(0x0A0); }
//
//void
//intel::apic::set_processor_priority(uint32_t val)
//{ m_vapic_page.at(0x0A0) = val; }
//
//uint32_t
//intel::apic::end_of_interrupt() const
//{ return m_vapic_page.at(0x0B0); }
//
//void
//intel::apic::set_end_of_interrupt(uint32_t val)
//{ m_vapic_page.at(0x0B0) = val; }
//
//uint32_t
//intel::apic::logical_destination() const
//{ return m_vapic_page.at(0x0D0); }
//
//void
//intel::apic::set_logical_destination(uint32_t val)
//{ m_vapic_page.at(0x0D0) = val; }
//
//uint32_t
//intel::apic::spurious_interrupt_vector() const
//{ return m_vapic_page.at(0x0F0); }
//
//void
//intel::apic::set_spurious_interrupt_vector(uint32_t val)
//{ m_vapic_page.at(0x0F0) = val; }
//
//uint32_t
//intel::apic::in_service_031_000() const
//{ return m_vapic_page.at(0x100); }
//
//void
//intel::apic::set_in_service_031_000(uint32_t val)
//{ m_vapic_page.at(0x100) = val; }
//
//uint32_t
//intel::apic::in_service_063_032() const
//{ return m_vapic_page.at(0x110); }
//
//void
//intel::apic::set_in_service_063_032(uint32_t val)
//{ m_vapic_page.at(0x110) = val; }
//
//uint32_t
//intel::apic::in_service_095_064() const
//{ return m_vapic_page.at(0x120); }
//
//void
//intel::apic::set_in_service_095_064(uint32_t val)
//{ m_vapic_page.at(0x120) = val; }
//
//uint32_t
//intel::apic::in_service_127_096() const
//{ return m_vapic_page.at(0x130); }
//
//void
//intel::apic::set_in_service_127_096(uint32_t val)
//{ m_vapic_page.at(0x130) = val; }
//
//uint32_t
//intel::apic::in_service_159_128() const
//{ return m_vapic_page.at(0x140); }
//
//void
//intel::apic::set_in_service_159_128(uint32_t val)
//{ m_vapic_page.at(0x140) = val; }
//
//uint32_t
//intel::apic::in_service_191_160() const
//{ return m_vapic_page.at(0x150); }
//
//void
//intel::apic::set_in_service_191_160(uint32_t val)
//{ m_vapic_page.at(0x150) = val; }
//
//uint32_t
//intel::apic::in_service_223_192() const
//{ return m_vapic_page.at(0x160); }
//
//void
//intel::apic::set_in_service_223_192(uint32_t val)
//{ m_vapic_page.at(0x160) = val; }
//
//uint32_t
//intel::apic::in_service_255_224() const
//{ return m_vapic_page.at(0x170); }
//
//void
//intel::apic::set_in_service_255_224(uint32_t val)
//{ m_vapic_page.at(0x170) = val; }
//
//uint32_t
//intel::apic::trigger_mode_031_000() const
//{ return m_vapic_page.at(0x180); }
//
//void
//intel::apic::set_trigger_mode_031_000(uint32_t val)
//{ m_vapic_page.at(0x180) = val; }
//
//uint32_t
//intel::apic::trigger_mode_063_032() const
//{ return m_vapic_page.at(0x190); }
//
//void
//intel::apic::set_trigger_mode_063_032(uint32_t val)
//{ m_vapic_page.at(0x190) = val; }
//
//uint32_t
//intel::apic::trigger_mode_095_064() const
//{ return m_vapic_page.at(0x1A0); }
//
//void
//intel::apic::set_trigger_mode_095_064(uint32_t val)
//{ m_vapic_page.at(0x1A0) = val; }
//
//uint32_t
//intel::apic::trigger_mode_127_096() const
//{ return m_vapic_page.at(0x1B0); }
//
//void
//intel::apic::set_trigger_mode_127_096(uint32_t val)
//{ m_vapic_page.at(0x1B0) = val; }
//
//uint32_t
//intel::apic::trigger_mode_159_128() const
//{ return m_vapic_page.at(0x1C0); }
//
//void
//intel::apic::set_trigger_mode_159_128(uint32_t val)
//{ m_vapic_page.at(0x1C0) = val; }
//
//uint32_t
//intel::apic::trigger_mode_191_160() const
//{ return m_vapic_page.at(0x1D0); }
//
//void
//intel::apic::set_trigger_mode_191_160(uint32_t val)
//{ m_vapic_page.at(0x1D0) = val; }
//
//uint32_t
//intel::apic::trigger_mode_223_192() const
//{ return m_vapic_page.at(0x1E0); }
//
//void
//intel::apic::set_trigger_mode_223_192(uint32_t val)
//{ m_vapic_page.at(0x1E0) = val; }
//
//uint32_t
//intel::apic::trigger_mode_255_224() const
//{ return m_vapic_page.at(0x1F0); }
//
//void
//intel::apic::set_trigger_mode_255_224(uint32_t val)
//{ m_vapic_page.at(0x1F0) = val; }
//
//uint32_t
//intel::apic::interrupt_request_031_000() const
//{ return m_vapic_page.at(0x200); }
//
//void
//intel::apic::set_interrupt_request_031_000(uint32_t val)
//{ m_vapic_page.at(0x200) = val; }
//
//uint32_t
//intel::apic::interrupt_request_063_032() const
//{ return m_vapic_page.at(0x210); }
//
//void
//intel::apic::set_interrupt_request_063_032(uint32_t val)
//{ m_vapic_page.at(0x210) = val; }
//
//uint32_t
//intel::apic::interrupt_request_095_064() const
//{ return m_vapic_page.at(0x220); }
//
//void
//intel::apic::set_interrupt_request_095_064(uint32_t val)
//{ m_vapic_page.at(0x220) = val; }
//
//uint32_t
//intel::apic::interrupt_request_127_096() const
//{ return m_vapic_page.at(0x230); }
//
//void
//intel::apic::set_interrupt_request_127_096(uint32_t val)
//{ m_vapic_page.at(0x230) = val; }
//
//uint32_t
//intel::apic::interrupt_request_159_128() const
//{ return m_vapic_page.at(0x240); }
//
//void
//intel::apic::set_interrupt_request_159_128(uint32_t val)
//{ m_vapic_page.at(0x240) = val; }
//
//uint32_t
//intel::apic::interrupt_request_191_160() const
//{ return m_vapic_page.at(0x250); }
//
//void
//intel::apic::set_interrupt_request_191_160(uint32_t val)
//{ m_vapic_page.at(0x250) = val; }
//
//uint32_t
//intel::apic::interrupt_request_223_192() const
//{ return m_vapic_page.at(0x260); }
//
//void
//intel::apic::set_interrupt_request_223_192(uint32_t val)
//{ m_vapic_page.at(0x260) = val; }
//
//uint32_t
//intel::apic::interrupt_request_255_224() const
//{ return m_vapic_page.at(0x270); }
//
//void
//intel::apic::set_interrupt_request_255_224(uint32_t val)
//{ m_vapic_page.at(0x270) = val; }
//
//uint32_t
//intel::apic::error_status() const
//{ return m_vapic_page.at(0x280); }
//
//void
//intel::apic::set_error_status(uint32_t val)
//{ m_vapic_page.at(0x280) = val; }
//
//uint32_t
//intel::apic::lvt_cmci() const
//{ return m_vapic_page.at(0x2F0); }
//
//void
//intel::apic::set_lvt_cmci(uint32_t val)
//{ m_vapic_page.at(0x2F0) = val; }
//
//uint64_t
//intel::apic::interrupt_command() const
//{
//    uint64_t lower = m_vapic_page.at(0x300);
//    uint64_t upper = m_vapic_page.at(0x310);
//
//    return (upper << 32) | lower;
//}
//
//void
//intel::apic::set_interrupt_command(uint64_t val)
//{
//    auto lower = gsl::narrow_cast<uint32_t>((val & 0x00000000FFFFFFFF));
//    auto upper = gsl::narrow_cast<uint32_t>((val & 0xFFFFFFFF00000000) >> 32);
//
//    m_vapic_page.at(0x300) = lower;
//    m_vapic_page.at(0x310) = upper;
//}
//
//uint32_t
//intel::apic::lvt_timer() const
//{ return m_vapic_page.at(0x320); }
//
//void
//intel::apic::set_lvt_timer(uint32_t val)
//{ m_vapic_page.at(0x320) = val; }
//
//uint32_t
//intel::apic::lvt_thermal_sensor() const
//{ return m_vapic_page.at(0x330); }
//
//void
//intel::apic::set_lvt_thermal_sensor(uint32_t val)
//{ m_vapic_page.at(0x330) = val; }
//
//uint32_t
//intel::apic::lvt_performance_monitoring() const
//{ return m_vapic_page.at(0x340); }
//
//void
//intel::apic::set_lvt_performance_monitoring(uint32_t val)
//{ m_vapic_page.at(0x340) = val; }
//
//uint32_t
//intel::apic::lvt_lint0() const
//{ return m_vapic_page.at(0x350); }
//
//void
//intel::apic::set_lvt_lint0(uint32_t val)
//{ m_vapic_page.at(0x350) = val; }
//
//uint32_t
//intel::apic::lvt_lint1() const
//{ return m_vapic_page.at(0x360); }
//
//void
//intel::apic::set_lvt_lint1(uint32_t val)
//{ m_vapic_page.at(0x360) = val; }
//
//uint32_t
//intel::apic::lvt_error() const
//{ return m_vapic_page.at(0x370); }
//
//void
//intel::apic::set_lvt_error(uint32_t val)
//{ m_vapic_page.at(0x370) = val; }
//
//uint32_t
//intel::apic::initial_count() const
//{ return m_vapic_page.at(0x380); }
//
//void
//intel::apic::set_initial_count(uint32_t val)
//{ m_vapic_page.at(0x380) = val; }
//
//uint32_t
//intel::apic::current_count() const
//{ return m_vapic_page.at(0x390); }
//
//void
//intel::apic::set_current_count(uint32_t val)
//{ m_vapic_page.at(0x390) = val; }
//
//uint32_t
//intel::apic::divide_configuration() const
//{ return m_vapic_page.at(0x3E0); }
//
//void
//intel::apic::set_divide_configuration(uint32_t val)
//{ m_vapic_page.at(0x3E0) = val; }