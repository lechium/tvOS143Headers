/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItemViewController.h>
#import <SiriTVUI/SiriTVUITemplateItemViewControllerDelegate.h>
#import <SiriTVUI/SiriTVUITemplatedViewDelegate.h>

@class SiriTVUITemplateGroupView, SiriTVUIGroupViewTemplateItem, NSString;

@interface SiriTVUITemplateGroupViewController : SiriTVUITemplateItemViewController <SiriTVUITemplateItemViewControllerDelegate, SiriTVUITemplatedViewDelegate>

@property (nonatomic,retain) SiriTVUITemplateGroupView * view; 
@property (nonatomic,retain) SiriTVUIGroupViewTemplateItem * templateItem; 
@property (nonatomic,readonly) double fullScreenFraction; 
@property (nonatomic,readonly) UIEdgeInsets contentMargins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)loadView;
-(UIEdgeInsets)contentMargins;
-(UIEdgeInsets)paddingForItemAtIndexPath:(id)arg1 ;
-(void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(double)fullScreenFraction;
-(void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2 ;
-(void)templateItemViewController:(id)arg1 selectTemplateItem:(id)arg2 atIndexPath:(id)arg3 ;
@end
