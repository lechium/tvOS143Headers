/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TILanguageModelOfflineLearningHandle, NSString, NSMutableDictionary, NSCharacterSet, NSSet;

@interface TILanguageModelOfflineLearningTask : NSObject {

	TILanguageModelOfflineLearningHandle* _handleForLanguageLikelihood;
	BOOL _cancelled;
	BOOL _oneTimeTask;
	NSString* _clientIdentifier;
	NSMutableDictionary* _handles;

}

@property (nonatomic,readonly) NSMutableDictionary * handles;                                                   //@synthesize handles=_handles - In the implementation block
@property (nonatomic,readonly) TILanguageModelOfflineLearningHandle * handleForLanguageLikelihood; 
@property (nonatomic,readonly) NSString * clientIdentifier;                                                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) id<TILinguisticDataSource> dataSource; 
@property (nonatomic,readonly) NSCharacterSet * linePaddingCharacters; 
@property (nonatomic,readonly) NSSet * forwardedMessageSeparators; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                 //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) BOOL oneTimeTask;                                                                //@synthesize oneTimeTask=_oneTimeTask - In the implementation block
+(id)dataSourceForTask;
+(id)taskWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
-(BOOL)isCancelled;
-(NSMutableDictionary *)handles;
-(NSString *)clientIdentifier;
-(void)setCancelled:(BOOL)arg1 ;
-(id<TILinguisticDataSource>)dataSource;
-(void)didFinishLearning;
-(TILanguageModelOfflineLearningHandle *)handleForLanguageLikelihood;
-(id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
-(NSCharacterSet *)linePaddingCharacters;
-(NSSet *)forwardedMessageSeparators;
-(id)handleForLanguage:(id)arg1 ;
-(void)setAdaptationContext:(id)arg1 onHandle:(id)arg2 ;
-(BOOL)incrementUsageCountsForMessages:(id)arg1 withHandle:(id)arg2 ;
-(void)enumerateHandlesForLanguage:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)incrementUsageCountsForMessages:(id)arg1 forLanguage:(id)arg2 adaptationContext:(id)arg3 ;
-(BOOL)oneTimeTask;
@end

