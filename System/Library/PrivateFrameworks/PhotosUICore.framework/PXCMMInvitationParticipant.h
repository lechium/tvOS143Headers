/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXCMMInvitationParticipant <NSObject>
@property (nonatomic,readonly) NSString * emailAddressString; 
@property (nonatomic,readonly) NSString * phoneNumberString; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * firstName; 
@required
-(NSString *)localizedName;
-(NSString *)firstName;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;

@end

