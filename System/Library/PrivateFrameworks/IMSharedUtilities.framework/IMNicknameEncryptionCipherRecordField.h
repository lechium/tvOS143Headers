/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, IMNicknameEncryptionFieldTag;

@interface IMNicknameEncryptionCipherRecordField : NSObject {

	NSString* _fieldName;
	NSData* _cipherData;
	NSData* _IV;
	IMNicknameEncryptionFieldTag* _tag;

}

@property (nonatomic,readonly) NSString * fieldName;                            //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * cipherData;                             //@synthesize cipherData=_cipherData - In the implementation block
@property (nonatomic,readonly) NSData * IV;                                     //@synthesize IV=_IV - In the implementation block
@property (nonatomic,readonly) IMNicknameEncryptionFieldTag * tag;              //@synthesize tag=_tag - In the implementation block
+(id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)dealloc;
-(IMNicknameEncryptionFieldTag *)tag;
-(NSString *)fieldName;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4 ;
-(NSData *)cipherData;
-(NSData *)IV;
@end

