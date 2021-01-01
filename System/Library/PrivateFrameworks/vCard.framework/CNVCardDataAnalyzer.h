/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <vCard/vCard-Structs.h>
@interface CNVCardDataAnalyzer : NSObject
+(BOOL)tryUTF8VCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryUTF16LEVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryUTF16BEVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryUTF16LEBOMVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryUTF16BEBOMVCard:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryUTF16WithByteOrderMarker:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryUTF16ByInferrence:(id)arg1 analysis:(CNVCardDataAnalysis*)arg2 ;
+(BOOL)tryVCardEncoding:(unsigned long long)arg1 data:(id)arg2 analysis:(CNVCardDataAnalysis*)arg3 ;
+(id)data:(id)arg1 byPrependingData:(id)arg2 ;
+(BOOL)data:(id)arg1 isVersion30WithPrefix:(id)arg2 encoding:(unsigned long long)arg3 ;
+(BOOL)data:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)data:(id)arg1 containsString:(id)arg2 encoding:(unsigned long long)arg3 ;
+(BOOL)data:(id)arg1 containsParam:(id)arg2 value:(id)arg3 encoding:(unsigned long long)arg4 ;
+(BOOL)data:(id)arg1 containsSubdata:(id)arg2 ;
+(unsigned char)data:(id)arg1 byteAtIndex:(unsigned long long)arg2 ;
+(CNVCardDataAnalysis)analyzeData:(id)arg1 ;
@end

