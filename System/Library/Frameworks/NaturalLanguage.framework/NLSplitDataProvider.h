/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NLDataProvider, NSArray;

@interface NLSplitDataProvider : NLDataProvider {

	NLDataProvider* _dataProvider;
	NSArray* _indexes;

}
-(id)configuration;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)inverseLabelMap;
-(id)initWithDataProvider:(id)arg1 indexes:(id)arg2 ;
-(void)_generateMaps;
-(unsigned long long)numberOfLabels;
-(unsigned long long)numberOfVocabularyEntries;
@end

