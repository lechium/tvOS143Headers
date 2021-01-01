/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry {

	NSString* _filterType;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
-(id)description;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
@end

