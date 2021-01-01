/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKViewElement.h>

@class NSString, IKDOMFeatureNavigationDocument;

@interface IKSplitTemplate : IKViewElement {

	NSString* _displayMode;
	IKDOMFeatureNavigationDocument* _leftNavigationDocument;
	IKDOMFeatureNavigationDocument* _rightNavigationDocument;

}

@property (nonatomic,copy) NSString * displayMode;                                                    //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) IKDOMFeatureNavigationDocument * leftNavigationDocument;               //@synthesize leftNavigationDocument=_leftNavigationDocument - In the implementation block
@property (nonatomic,readonly) IKDOMFeatureNavigationDocument * rightNavigationDocument;              //@synthesize rightNavigationDocument=_rightNavigationDocument - In the implementation block
+(id)supportedFeatures;
-(void)setDisplayMode:(NSString *)arg1 ;
-(NSString *)displayMode;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)_featureWithName:(id)arg1 ;
-(IKDOMFeatureNavigationDocument *)leftNavigationDocument;
-(IKDOMFeatureNavigationDocument *)rightNavigationDocument;
@end
