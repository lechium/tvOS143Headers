/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying> {

	BOOL _locationIncludesTimestamp;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL locationIncludesTimestamp;              //@synthesize locationIncludesTimestamp=_locationIncludesTimestamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)locationIncludesTimestamp;
-(void)setLocationIncludesTimestamp:(BOOL)arg1 ;
@end

