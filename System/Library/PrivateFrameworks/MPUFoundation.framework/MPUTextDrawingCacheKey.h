/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPUTextDrawingCacheKey : NSObject <NSCopying> {

	NSString* _text;
	CGSize _allowedSize;

}

@property (assign,nonatomic) CGSize allowedSize;              //@synthesize allowedSize=_allowedSize - In the implementation block
@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)allowedSize;
-(void)setAllowedSize:(CGSize)arg1 ;
@end

