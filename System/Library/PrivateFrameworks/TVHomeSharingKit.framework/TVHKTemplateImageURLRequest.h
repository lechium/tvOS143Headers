/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVHKContributorImageLoadParams;

@interface TVHKTemplateImageURLRequest : NSObject {

	TVHKContributorImageLoadParams* _params;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) TVHKContributorImageLoadParams * params;              //@synthesize params=_params - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(TVHKContributorImageLoadParams *)params;
-(void)setParams:(TVHKContributorImageLoadParams *)arg1 ;
@end

