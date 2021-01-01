/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXCMMComposeRecipientValidationManagerDelegate;
@class NSMutableDictionary, PXIDSAddressQueryController, PXCMMComposeRecipientDataSource;

@interface PXCMMComposeRecipientValidationManager : NSObject {

	NSMutableDictionary* _composeRecipientsToQuery;
	NSMutableDictionary* _queryAddressesToComposeRecipientQuery;
	PXIDSAddressQueryController* _addressQueryController;
	PXCMMComposeRecipientDataSource* _dataSource;
	id<PXCMMComposeRecipientValidationManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PXCMMComposeRecipientDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientValidationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)new;
-(id)init;
-(id<PXCMMComposeRecipientValidationManagerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMComposeRecipientValidationManagerDelegate>)arg1 ;
-(PXCMMComposeRecipientDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)_requestValidationForComposeRecipientsAtIndexes:(id)arg1 ;
-(long long)validationTypeForComposeRecipient:(id)arg1 ;
-(void)_handleAddressQueryResults:(id)arg1 error:(id)arg2 ;
@end

