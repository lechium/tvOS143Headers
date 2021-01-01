/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIAppearance.h>

@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance {

	NSDictionary* _propertiesToMatch;

}

@property (setter=_setPropertiesToMatch:,nonatomic,retain) NSDictionary * _propertiesToMatch;              //@synthesize propertiesToMatch=_propertiesToMatch - In the implementation block
+(id)_appearanceObjectKeyForProperties:(id)arg1 ;
+(id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
-(void)dealloc;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(BOOL)_isRecordingInvocations;
-(NSDictionary *)_propertiesToMatch;
-(void)_setPropertiesToMatch:(id)arg1 ;
@end
