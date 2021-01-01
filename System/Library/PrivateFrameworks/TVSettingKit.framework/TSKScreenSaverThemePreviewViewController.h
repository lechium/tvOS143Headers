/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSettingKit/TSKPreviewViewController.h>

@class NSURL;

@interface TSKScreenSaverThemePreviewViewController : TSKPreviewViewController {

	NSURL* _previewImageURL;

}

@property (nonatomic,readonly) NSURL * previewImageURL;              //@synthesize previewImageURL=_previewImageURL - In the implementation block
-(void)viewDidLoad;
-(id)initWithImageURL:(id)arg1 ;
-(NSURL *)previewImageURL;
-(void)_updatePreviewImage;
@end

