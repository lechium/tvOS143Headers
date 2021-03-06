/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKThreadsafeCache.h>
#import <libobjc.A.dylib/GKScreenConfigurationListener.h>

@class NSString;

@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(void)greatestScreenScaleDidChange:(double)arg1 ;
@end

