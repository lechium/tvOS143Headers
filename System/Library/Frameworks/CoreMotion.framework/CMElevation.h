/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMAltimeterInternal;

@interface CMElevation : NSObject {

	CMAltimeterInternal* _internal;

}

@property (nonatomic,readonly) CMAltimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isElevationAvailable;
-(id)init;
-(void)dealloc;
-(CMAltimeterInternal *)_internal;
-(void)startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopElevationUpdates;
@end

