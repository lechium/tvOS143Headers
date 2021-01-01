/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <SiriUI/SiriUITemplateView.h>

@protocol SiriUITemplatedView, SiriUITemplateModel;
@class NSString;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView> {

	id<SiriUITemplatedView> _templatedSuperview;
	id<SiriUITemplateModel> _dataSource;

}

@property (assign,nonatomic,__weak) id<SiriUITemplateModel> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview;              //@synthesize templatedSuperview=_templatedSuperview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SiriUITemplateModel>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(id<SiriUITemplateModel>)arg1 ;
-(void)reloadData;
-(double)desiredHeight;
-(void)removeFromTemplatedSuperview;
-(id<SiriUITemplatedView>)templatedSuperview;
-(void)setTemplatedSuperview:(id<SiriUITemplatedView>)arg1 ;
@end

