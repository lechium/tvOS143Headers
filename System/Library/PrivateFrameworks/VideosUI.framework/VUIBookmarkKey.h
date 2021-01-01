/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VUIBookmarkKey : NSObject {

	NSString* _identifier;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long keyType;                  //@synthesize keyType=_keyType - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(long long)keyType;
-(id)initWithIdentifier:(id)arg1 keyType:(long long)arg2 ;
@end
