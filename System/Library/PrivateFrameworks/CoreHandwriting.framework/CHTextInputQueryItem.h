/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSArray, CHTextCorrectionResult;

@interface CHTextInputQueryItem : NSObject {

	NSNumber* _itemIdentifier;
	NSNumber* _itemStableIdentifier;
	NSArray* _strokeIdentifiers;
	CHTextCorrectionResult* _correctionResult;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * itemStableIdentifier;                        //@synthesize itemStableIdentifier=_itemStableIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * strokeIdentifiers;                       //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) CHTextCorrectionResult * correctionResult;              //@synthesize correctionResult=_correctionResult - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSNumber *)itemIdentifier;
-(CHTextCorrectionResult *)correctionResult;
-(NSArray *)strokeIdentifiers;
-(id)initWithIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 correctionResult:(id)arg4 ;
-(NSNumber *)itemStableIdentifier;
-(BOOL)isEqualToTextInputQueryItem:(id)arg1 ;
@end

