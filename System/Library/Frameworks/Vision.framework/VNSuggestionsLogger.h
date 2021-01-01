/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNClusteringLogger.h>

@interface VNSuggestionsLogger : VNClusteringLogger
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 ;
-(void)logString:(id)arg1 ;
-(void)logInputFaceIdsWithFlags:(id)arg1 ;
-(void)logSuggestons:(id)arg1 description:(id)arg2 ;
-(void)logAllSuggestons:(id)arg1 ;
-(void)logFilteredByInputQuerySuggestons:(id)arg1 ;
-(void)logConnectedGroups:(id)arg1 ;
-(void)logFinalSuggestionsList:(id)arg1 ;
@end
