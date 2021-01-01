/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHLanguageUtilities : NSObject
+(unsigned)normalizeLMTokenIDForWord:(id)arg1 tokenID:(unsigned)arg2 isFromPattern:(BOOL)arg3 score:(double*)arg4 languageModel:(void*)arg5 ;
+(id)tokensRangesForString:(id)arg1 outTokenIDs:(id*)arg2 languageModel:(void*)arg3 ;
+(id)splitStringIntoSubtokensForLexicon:(id)arg1 minLength:(long long)arg2 ;
+(BOOL)findPartialMatchInPhraseLexicon:(LXLexiconRef)arg1 token:(id)arg2 contextBeforeToken:(id)arg3 ;
+(id)transliterateStringUsingICUTransliterator:(id)arg1 _icuTransliterator:(void*)arg2 ;
@end

