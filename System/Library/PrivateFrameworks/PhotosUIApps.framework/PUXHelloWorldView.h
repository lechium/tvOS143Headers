/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUIApps.framework/PhotosUIApps
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUIApps/PhotosUIApps-Structs.h>
#import <UIKitCore/UIView.h>

@class PUXHelloWorld, UILabel;

@interface PUXHelloWorldView : UIView {

	PUXHelloWorld* _swiftObject;
	UILabel* _label;

}

@property (nonatomic,retain) PUXHelloWorld * swiftObject;              //@synthesize swiftObject=_swiftObject - In the implementation block
@property (nonatomic,readonly) UILabel * label;                        //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PUXHelloWorld *)swiftObject;
-(void)setSwiftObject:(PUXHelloWorld *)arg1 ;
@end
