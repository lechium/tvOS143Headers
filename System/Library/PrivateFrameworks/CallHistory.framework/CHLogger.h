/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CallHistory/CallHistory-Structs.h>
@interface CHLogger : NSObject {

	os_log_sRef _logHandle;

}
-(os_log_sRef)logHandle;
-(id)initWithDomain:(const char*)arg1 ;
@end

