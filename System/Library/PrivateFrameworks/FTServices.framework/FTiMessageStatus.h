/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FTServiceStatus;

@interface FTiMessageStatus : NSObject {

	FTServiceStatus* _serviceStatus;

}

@property (nonatomic,readonly) FTServiceStatus * serviceStatus;              //@synthesize serviceStatus=_serviceStatus - In the implementation block
@property (nonatomic,readonly) BOOL iMessageSupported; 
+(id)sharedInstance;
-(id)initPrivate;
-(BOOL)iMessageSupported;
-(FTServiceStatus *)serviceStatus;
@end

