/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface IMRKResponse : NSObject {

	NSString* _string;
	NSDictionary* _attributes;
	NSString* _category;

}

@property (readonly) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (readonly) NSString * category;                    //@synthesize category=_category - In the implementation block
+(id)alloc;
-(NSString *)string;
-(NSString *)category;
-(NSDictionary *)attributes;
@end

