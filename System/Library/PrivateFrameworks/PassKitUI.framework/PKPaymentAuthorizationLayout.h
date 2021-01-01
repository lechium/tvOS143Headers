/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKPaymentAuthorizationLayout : NSObject {

	BOOL _isAMPPayment;
	BOOL _isInstallment;
	BOOL _isPaymentSummaryPinned;
	BOOL _shouldSuppressTotal;
	long long _style;
	double _contentHorizontalMargin;
	double _valueLeftMargin;
	double _glyphDimension;
	unsigned long long _requestType;
	unsigned long long _requestor;
	NSString* _localizedNavigationTitle;

}

@property (nonatomic,readonly) long long style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double contentHorizontalMargin;                   //@synthesize contentHorizontalMargin=_contentHorizontalMargin - In the implementation block
@property (nonatomic,readonly) double valueLeftMargin;                           //@synthesize valueLeftMargin=_valueLeftMargin - In the implementation block
@property (nonatomic,readonly) double glyphDimension;                            //@synthesize glyphDimension=_glyphDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) unsigned long long requestor;                     //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,readonly) BOOL isAMPPayment;                                //@synthesize isAMPPayment=_isAMPPayment - In the implementation block
@property (nonatomic,readonly) BOOL isInstallment;                               //@synthesize isInstallment=_isInstallment - In the implementation block
@property (nonatomic,readonly) BOOL isPaymentSummaryPinned;                      //@synthesize isPaymentSummaryPinned=_isPaymentSummaryPinned - In the implementation block
@property (nonatomic,readonly) NSString * localizedNavigationTitle;              //@synthesize localizedNavigationTitle=_localizedNavigationTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressTotal;                         //@synthesize shouldSuppressTotal=_shouldSuppressTotal - In the implementation block
-(long long)style;
-(unsigned long long)requestType;
-(unsigned long long)requestor;
-(BOOL)isPaymentSummaryPinned;
-(NSString *)localizedNavigationTitle;
-(id)initWithStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(double)valueLeftMargin;
-(double)contentHorizontalMargin;
-(BOOL)isAMPPayment;
-(BOOL)isInstallment;
-(BOOL)shouldSuppressTotal;
-(double)glyphDimension;
@end

