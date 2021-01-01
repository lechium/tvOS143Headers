/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, NSMutableArray, NSArray, PGManager;

@interface PHASuggestionController : NSObject {

	NSObject*<OS_os_log> _loggingConnection;
	NSMutableArray* _existingSuggestions;
	NSMutableArray* _suggestionsToRetire;
	NSMutableArray* _suggestionsToDelete;
	NSArray* _cachedFeaturedSuggestions;
	unsigned long long _newFeaturedSuggestionsCount;
	NSArray* _existingMemories;
	PGManager* _graphManager;

}

@property (nonatomic,readonly) NSArray * existingSuggestions; 
@property (nonatomic,retain) NSArray * existingMemories;                                    //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,readonly) unsigned long long newFeaturedSuggestionsCount; 
@property (nonatomic,readonly) PGManager * graphManager;                                    //@synthesize graphManager=_graphManager - In the implementation block
+(double)_maximumDurationBeforeDeletionForSuggestionType:(unsigned short)arg1 andSubtype:(unsigned short)arg2 ;
+(unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)arg1 andSubtype:(unsigned short)arg2 ;
+(id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(PGManager *)graphManager;
-(id)initWithGraphManager:(id)arg1 ;
-(NSArray *)existingSuggestions;
-(void)ingestExistingSuggestionsWithOptions:(id)arg1 ;
-(id)_existingSuggestionsForProfile:(unsigned char)arg1 ;
-(id)deniedSuggestionsForProfile:(unsigned char)arg1 ;
-(BOOL)shouldRetireSuggestion:(id)arg1 atDate:(id)arg2 ;
-(BOOL)shouldDeleteSuggestion:(id)arg1 atDate:(id)arg2 ;
-(void)ingestSuggestions:(id)arg1 atDate:(id)arg2 ;
-(id)commitSuggestions:(id)arg1 retiringSuggestions:(id)arg2 deletingSuggestions:(id)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)newFeaturedSuggestionsCount;
-(id)collidableMemoriesWithReferenceDate:(id)arg1 andDelay:(double)arg2 ;
-(id)generateSingleAssetSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)generateOnThisDayAssetSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)generateSharingSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)generateWidgetSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)generateSuggestionsWithProfile:(unsigned char)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)collidableSuggestionsWithOptions:(id)arg1 ;
-(id)_suggestionsToReuseWithSuggestionSession:(id)arg1 numberOfSuggestionsToReuse:(unsigned long long)arg2 ;
-(id)_createSuggestionSessionWithProfile:(unsigned char)arg1 ;
-(id)pendingOnThisDayMemories;
-(void)cacheSuggestionsWithCurrentlyFeaturedState;
-(BOOL)_canFeatureSuggestion:(id)arg1 ;
-(id)suggestionInfosWithOptions:(id)arg1 ;
-(void)recordDeletedSuggestions:(id)arg1 ;
-(void)recordRetiredSuggestions:(id)arg1 ;
-(void)recordCreatedSuggestions:(id)arg1 duringSession:(id)arg2 ;
@end

