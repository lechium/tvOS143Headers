/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject {

	NSDictionary* _overrideMapping;

}

@property (nonatomic,readonly) NSDictionary * overrideMapping;              //@synthesize overrideMapping=_overrideMapping - In the implementation block
+(id)sharedInstance;
-(unsigned char)localeIdentifierHasOverride:(id)arg1 ;
-(id)overrideLocaleForIdentifier:(id)arg1 ;
-(NSDictionary *)overrideMapping;
@end
