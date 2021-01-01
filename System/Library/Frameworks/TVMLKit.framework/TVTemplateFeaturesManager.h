/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVTemplateFeaturesManagerDelegate;
@class NSMutableDictionary;

@interface TVTemplateFeaturesManager : NSObject {

	NSMutableDictionary* _contextsByFeature;
	id<TVTemplateFeaturesManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVTemplateFeaturesManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)featuresManagerForAppDocument:(id)arg1 ;
-(id<TVTemplateFeaturesManagerDelegate>)delegate;
-(void)setDelegate:(id<TVTemplateFeaturesManagerDelegate>)arg1 ;
-(void)popContext:(id)arg1 forFeature:(id)arg2 ;
-(void)pushContext:(id)arg1 forFeature:(id)arg2 ;
-(id)currentContextForFeature:(id)arg1 ;
-(id)_contextsForFeature:(id)arg1 ;
-(long long)_rankForContext:(id)arg1 ;
@end
