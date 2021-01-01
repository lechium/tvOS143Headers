/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASKAirplaneModeInquiryDelegate;
@interface ASKAirplaneModeInquiry : NSObject {

	id<ASKAirplaneModeInquiryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASKAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(id<ASKAirplaneModeInquiryDelegate>)delegate;
-(void)setDelegate:(id<ASKAirplaneModeInquiryDelegate>)arg1 ;
-(BOOL)isEnabled;
@end

