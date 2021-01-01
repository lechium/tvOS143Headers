/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem {

	PKDisbursementApplicationInformation* _applicationInformation;

}

@property (nonatomic,retain) PKDisbursementApplicationInformation * applicationInformation;              //@synthesize applicationInformation=_applicationInformation - In the implementation block
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(PKDisbursementApplicationInformation *)applicationInformation;
-(void)setApplicationInformation:(PKDisbursementApplicationInformation *)arg1 ;
@end

