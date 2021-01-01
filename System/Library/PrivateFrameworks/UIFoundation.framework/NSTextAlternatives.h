/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSTextAlternatives : NSObject <NSSecureCoding> {

	NSString* _primaryString;
	NSArray* _alternativeStrings;
	id _internal;
	BOOL _isLowConfidence;

}

@property (assign,nonatomic) BOOL isLowConfidence;              //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
@property (readonly) NSString * primaryString; 
@property (readonly) NSArray * alternativeStrings; 
+(id)attributedText:(id)arg1 withAlternativeTexts:(id)arg2 style:(long long)arg3 ;
+(id)attributedText:(id)arg1 withAlternativeTexts:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(NSArray *)alternativeStrings;
-(NSString *)primaryString;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 isLowConfidence:(BOOL)arg4 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 isLowConfidence:(BOOL)arg3 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3 ;
-(void)noteSelectedAlternativeString:(id)arg1 ;
-(id)originalText;
-(unsigned long long)numberOfAlternatives;
-(id)alternatives;
-(id)alternativeAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLowConfidence;
-(void)setIsLowConfidence:(BOOL)arg1 ;
@end

