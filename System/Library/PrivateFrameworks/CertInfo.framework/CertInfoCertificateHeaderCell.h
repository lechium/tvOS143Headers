/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CertInfoGradientLabel* _trustedLabel;

}
-(void)setExpired:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_subtitleLabel;
-(double)rowHeight;
-(void)setTrustTitle:(id)arg1 ;
-(void)setTrustSubtitle:(id)arg1 ;
-(id)_certificateImage;
-(id)_trustedLabel;
-(id)_notTrustedGradient;
@end

