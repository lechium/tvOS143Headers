/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CHTokenizedTextResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _tokenColumns;
	NSArray* _transcriptionPaths;
	NSArray* _transcriptionPathScores;
	long long _recognizerGenerationIdentifier;
	long long _precedingLineBreaks;
	long long _changeableCount;
	NSString* _trailingSeparator;

}

@property (nonatomic,readonly) long long tokenColumnCount; 
@property (nonatomic,readonly) long long changeableTokenColumnCount; 
@property (nonatomic,copy,readonly) NSString * trailingSeparator;                   //@synthesize trailingSeparator=_trailingSeparator - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transcriptionPaths;                   //@synthesize transcriptionPaths=_transcriptionPaths - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transcriptionPathScores;              //@synthesize transcriptionPathScores=_transcriptionPathScores - In the implementation block
@property (nonatomic,copy,readonly) NSString * topTranscription; 
@property (nonatomic,readonly) NSString * recognizerDebugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenizedTextResultWithString:(id)arg1 strokeIndexes:(id)arg2 trailingSeparator:(id)arg3 recognizerGenerationIdentifier:(long long)arg4 ;
+(long long)mergeTokenRow:(id)arg1 intoUniqueRows:(id)arg2 ;
+(pair<double, double>)_scoreMeanAndStdForToken:(id)arg1 forLocale:(id)arg2 ;
+(long long)_characterCountInToken:(id)arg1 filteringCharacterSet:(id)arg2 filteredCharacterCount:(long long*)arg3 ;
+(BOOL)areTokenRowsEquivalent:(id)arg1 otherRow:(id)arg2 ;
+(id)extendedToken:(id)arg1 withStrokeIndexSet:(id)arg2 alignmentScore:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)transcriptionPaths;
-(id)transcriptionWithPath:(id)arg1 columnRange:(NSRange)arg2 filterLowConfidence:(BOOL)arg3 excludeGibberish:(BOOL)arg4 rejectionRate:(double*)arg5 tokenProcessingBlock:(/*^block*/id)arg6 ;
-(id)initWithTokenColumns:(id)arg1 transcriptionPaths:(id)arg2 scores:(id)arg3 recognizerGenerationIdentifier:(long long)arg4 ;
-(long long)tokenColumnCount;
-(NSArray *)transcriptionPathScores;
-(id)tokenColumns;
-(id)tokensInTranscriptionPath:(id)arg1 atColumnIndex:(long long)arg2 ;
-(long long)recognizerGenerationIdentifier;
-(void)enumerateTokensInTranscriptionPath:(id)arg1 columnRange:(NSRange)arg2 tokenProcessingBlock:(/*^block*/id)arg3 ;
-(NSString *)topTranscription;
-(id)legacyTextRecognitionResults;
-(id)transcriptionWithPath:(id)arg1 columnRange:(NSRange)arg2 filterLowConfidence:(BOOL)arg3 ;
-(id)tokenRowsAtColumnIndex:(long long)arg1 ;
-(id)tokenAtLocation:(SCD_Struct_CH43)arg1 ;
-(id)precedingSeparatorForToken:(id)arg1 ;
-(id)initWithTokenColumns:(id)arg1 transcriptionPaths:(id)arg2 scores:(id)arg3 trailingSeparator:(id)arg4 recognizerGenerationIdentifier:(long long)arg5 changeableColumnCount:(long long)arg6 ;
-(id)initWithTokenColumns:(id)arg1 transcriptionPaths:(id)arg2 scores:(id)arg3 trailingSeparator:(id)arg4 recognizerGenerationIdentifier:(long long)arg5 ;
-(id)initWithBestPathTokens:(id)arg1 pathProbabilities:(id)arg2 trailingSeparator:(id)arg3 recognizerGenerationIdentifier:(long long)arg4 changeableColumnCount:(long long)arg5 ;
-(long long)changeableTokenColumnCount;
-(BOOL)shouldFilterOutStringForToken:(id)arg1 isGibberish:(BOOL*)arg2 ;
-(BOOL)_isGibberishToken:(id)arg1 ;
-(long long)precedingLineBreaks;
-(double)languageFitnessForTranscriptionPath:(id)arg1 locale:(id)arg2 recognitionMode:(int)arg3 ;
-(long long)_tokenCountInTranscriptionPath:(id)arg1 columnRange:(NSRange)arg2 ;
-(double)_normalizedLanguageFitness:(double)arg1 ;
-(id)_legacyTextRecognitionResultForTranscriptionIndex:(long long)arg1 ;
-(BOOL)isEqualToTokenizedTextResult:(id)arg1 ;
-(id)precedingSeparatorForTopTranscriptionPath;
-(NSString *)trailingSeparator;
-(id)initWithBestPathTokens:(id)arg1 pathProbabilities:(id)arg2 trailingSeparator:(id)arg3 recognizerGenerationIdentifier:(long long)arg4 ;
-(NSString *)recognizerDebugDescription;
-(id)strokeIndexesForColumnsInRange:(NSRange)arg1 ;
-(id)tokensFromTopTranscriptionWithCharacterRange:(NSRange)arg1 ;
-(id)tokenizedResultWithFilteredPaths:(double)arg1 ;
-(double)languageFitnessForLocale:(id)arg1 recognitionMode:(int)arg2 ;
-(id)phraseCaseCorrectedResultWithHistory:(id)arg1 phraseLexicon:(LXLexiconRef)arg2 maxPhraseLength:(long long)arg3 ;
@end

