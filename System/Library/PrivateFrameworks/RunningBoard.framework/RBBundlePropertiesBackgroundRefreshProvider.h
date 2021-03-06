/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RunningBoard/RunningBoard-Structs.h>
@class NSCache;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject {

	NSCache* _backgroundRefreshStateByIdentity;
	os_unfair_lock_s _lock;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(void)removeIdentity:(id)arg1 ;
-(BOOL)isBackgroundRefreshEnabledForIdentity:(id)arg1 ;
@end

