
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCalendarEventsSpec.h"

@interface CalendarEvents : NSObject <NativeCalendarEventsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CalendarEvents : NSObject <RCTBridgeModule>
#endif

@end
