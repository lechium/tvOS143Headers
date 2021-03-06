/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RunningBoard/RunningBoard-Structs.h>
@class NSDate, NSString;

@interface RBPowerAssertion : NSObject {

	unsigned _identifier;
	NSDate* _acquisitionDate;
	NSString* _name;
	NSString* _baseName;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

