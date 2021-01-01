/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSDate, PGManager, NSObject, NSArray, PGSuggestionNotificationProfile, PHPhotoLibrary;

@interface PGSuggestionSession : NSObject {

	NSDate* _universalToday;
	unsigned char _profile;
	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	NSArray* _existingSuggestions;
	NSArray* _collidableMemories;
	PGSuggestionNotificationProfile* _notificationProfile;
	NSArray* _deniedSuggestions;

}

@property (nonatomic,readonly) unsigned char profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PGManager * graphManager;                                           //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                             //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) NSArray * existingSuggestions;                                        //@synthesize existingSuggestions=_existingSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * collidableMemories;                                         //@synthesize collidableMemories=_collidableMemories - In the implementation block
@property (nonatomic,readonly) PGSuggestionNotificationProfile * notificationProfile;              //@synthesize notificationProfile=_notificationProfile - In the implementation block
@property (nonatomic,retain) NSArray * deniedSuggestions;                                          //@synthesize deniedSuggestions=_deniedSuggestions - In the implementation block
+(id)suggestionSubtypesWithProfile:(unsigned char)arg1 ;
+(id)suggestionTypesWithProfile:(unsigned char)arg1 ;
+(id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1 ;
+(id)suggesterClassesWithProfile:(unsigned char)arg1 ;
-(unsigned char)profile;
-(PHPhotoLibrary *)photoLibrary;
-(NSObject*<OS_os_log>)loggingConnection;
-(PGManager *)graphManager;
-(NSArray *)existingSuggestions;
-(id)infosWithSuggestions:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)setExistingSuggestions:(NSArray *)arg1 ;
-(id)initWithProfile:(unsigned char)arg1 graphManager:(id)arg2 ;
-(id)existingSuggestionsWithState:(unsigned short)arg1 count:(unsigned long long)arg2 ;
-(void)setCollidableMemories:(NSArray *)arg1 ;
-(id)uncoordinatedSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)coordinatedSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)setDeniedSuggestions:(NSArray *)arg1 ;
-(PGSuggestionNotificationProfile *)notificationProfile;
-(unsigned long long)reasonForSuggestion:(id)arg1 collidingWithSuggestion:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(unsigned long long)singleAssetSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 ;
-(unsigned long long)outstanderSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(unsigned long long)deniedSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 ;
-(BOOL)supportsRelaxedCollisionRulesForSuggester:(id)arg1 ;
-(id)anySuggestionCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(BOOL)arg3 collisionReason:(unsigned long long*)arg4 ;
-(id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(BOOL)arg3 ;
-(BOOL)suggestion:(id)arg1 collidesWithMemories:(id)arg2 ;
-(id)electedSuggestionsFromSuggestions:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)bestSuggestionBetween:(id)arg1 and:(id)arg2 ;
-(id)suggesterClasses;
-(BOOL)suggesterClass:(Class)arg1 supportsOptions:(id)arg2 ;
-(id)activeSuggestersWithOptions:(id)arg1 ;
-(BOOL)_suggestionIsColliding:(id)arg1 relaxCollisionRules:(BOOL)arg2 ;
-(BOOL)suggestion:(id)arg1 isEqualToSuggestion:(id)arg2 ;
-(id)infoWithSuggestion:(id)arg1 ;
-(NSArray *)collidableMemories;
-(NSArray *)deniedSuggestions;
@end

