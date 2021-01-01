/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, MRLanguageOption, _MRLanguageOptionGroupProtobuf, NSData, NSDictionary;

@interface MRLanguageOptionGroup : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsEmptySelection;
	BOOL _hasAllowsEmptySelection;
	NSArray* _languageOptions;
	MRLanguageOption* _defaultLanguageOption;

}

@property (nonatomic,readonly) _MRLanguageOptionGroupProtobuf * protobuf; 
@property (assign,nonatomic) BOOL allowsEmptySelection;                                   //@synthesize allowsEmptySelection=_allowsEmptySelection - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsEmptySelection;                                //@synthesize hasAllowsEmptySelection=_hasAllowsEmptySelection - In the implementation block
@property (nonatomic,copy) NSArray * languageOptions;                                     //@synthesize languageOptions=_languageOptions - In the implementation block
@property (nonatomic,retain) MRLanguageOption * defaultLanguageOption;                    //@synthesize defaultLanguageOption=_defaultLanguageOption - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(_MRLanguageOptionGroupProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setLanguageOptions:(NSArray *)arg1 ;
-(void)setDefaultLanguageOption:(MRLanguageOption *)arg1 ;
-(void)setAllowsEmptySelection:(BOOL)arg1 ;
-(NSArray *)languageOptions;
-(MRLanguageOption *)defaultLanguageOption;
-(BOOL)allowsEmptySelection;
-(BOOL)hasAllowsEmptySelection;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowsEmptySelection:(BOOL)arg3 ;
-(void)setHasAllowsEmptySelection:(BOOL)arg1 ;
@end

