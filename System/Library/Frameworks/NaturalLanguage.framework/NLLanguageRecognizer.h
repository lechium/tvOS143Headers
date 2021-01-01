/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSArray, NSDictionary, NSString;

@interface NLLanguageRecognizer : NSObject {

	void* _identifier;
	NSArray* _languageConstraints;
	NSDictionary* _languageHints;

}

@property (nonatomic,copy,readonly) NSString * dominantLanguage; 
@property (nonatomic,copy) NSDictionary * languageHints; 
@property (nonatomic,copy) NSArray * languageConstraints; 
+(id)dominantLanguageForString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(NSString *)dominantLanguage;
-(void)processString:(id)arg1 ;
-(void)processString:(id)arg1 range:(NSRange)arg2 ;
-(id)languageHypothesesWithMaximum:(unsigned long long)arg1 ;
-(NSDictionary *)languageHints;
-(void)setLanguageHints:(NSDictionary *)arg1 ;
-(NSArray *)languageConstraints;
-(void)setLanguageConstraints:(NSArray *)arg1 ;
@end
