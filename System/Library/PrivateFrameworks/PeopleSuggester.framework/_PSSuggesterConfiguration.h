/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject {

	long long _maximumNumberOfSuggestions;
	_PSEnsembleModel* _suggestionModel;

}

@property (assign,nonatomic) long long maximumNumberOfSuggestions;              //@synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions - In the implementation block
@property (nonatomic,retain) _PSEnsembleModel * suggestionModel;                //@synthesize suggestionModel=_suggestionModel - In the implementation block
+(id)defaultConfiguration;
-(id)description;
-(long long)maximumNumberOfSuggestions;
-(void)setMaximumNumberOfSuggestions:(long long)arg1 ;
-(_PSEnsembleModel *)suggestionModel;
-(void)setSuggestionModel:(_PSEnsembleModel *)arg1 ;
@end
