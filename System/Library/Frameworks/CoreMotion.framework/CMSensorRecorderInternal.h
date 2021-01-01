/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSensorRecorderInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	CLConnectionClient* fLocationdConnection;

}
-(id)init;
-(void)dealloc;
-(id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2 ;
-(id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3 ;
-(void)teardown;
-(id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2 ;
-(id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3 ;
-(id)_newMetaUsingMessage:(const char*)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3 ;
-(BOOL)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4 ;
-(BOOL)setSensorSampleRate:(unsigned)arg1 forType:(int)arg2 ;
@end

