/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CardServices/CRSResponse.h>

@protocol CRCard;
@class CRSCardRequest;

@interface CRSCardResponse : CRSResponse {

	CRSCardRequest* _request;
	id<CRCard> _card;

}

@property (nonatomic,retain) CRSCardRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<CRCard> card;                       //@synthesize card=_card - In the implementation block
-(CRSCardRequest *)request;
-(void)setRequest:(CRSCardRequest *)arg1 ;
-(id<CRCard>)card;
-(void)setCard:(id<CRCard>)arg1 ;
@end

