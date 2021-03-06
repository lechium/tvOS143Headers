/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLLexicon : NSObject {

	NSString* _localization;
	const void* _lexicon;

}

@property (copy,readonly) NSString * localization; 
-(id)description;
-(void)dealloc;
-(NSString *)localization;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(LXLexiconRef)lexicon;
-(void)_enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLocalization:(id)arg1 ;
-(id)entryForTokenID:(unsigned)arg1 ;
-(id)entryForString:(id)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

