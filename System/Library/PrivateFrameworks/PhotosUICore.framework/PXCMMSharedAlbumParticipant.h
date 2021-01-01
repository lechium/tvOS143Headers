/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMInvitationParticipant.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXCMMSharedAlbumParticipant : NSObject <PXCMMInvitationParticipant, NSCopying> {

	NSString* _emailAddressString;
	NSString* _phoneNumberString;
	NSString* _localizedName;
	NSString* _firstName;

}

@property (nonatomic,readonly) NSString * emailAddressString;              //@synthesize emailAddressString=_emailAddressString - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumberString;               //@synthesize phoneNumberString=_phoneNumberString - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)localizedName;
-(NSString *)firstName;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
@end

