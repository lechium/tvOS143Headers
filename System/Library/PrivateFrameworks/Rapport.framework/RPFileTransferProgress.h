/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface RPFileTransferProgress : NSObject <NSSecureCoding> {

	int _linkType;
	int _type;
	double _bytesPerSecond;
	double _remainingSeconds;
	double _compressionRate;
	NSString* _currentFilename;
	NSError* _error;
	long long _transferredByteCount;
	long long _totalByteCount;
	long long _transferredFileCount;
	long long _totalFileCount;

}

@property (assign,nonatomic) double bytesPerSecond;                       //@synthesize bytesPerSecond=_bytesPerSecond - In the implementation block
@property (assign,nonatomic) double remainingSeconds;                     //@synthesize remainingSeconds=_remainingSeconds - In the implementation block
@property (assign,nonatomic) double compressionRate;                      //@synthesize compressionRate=_compressionRate - In the implementation block
@property (nonatomic,copy) NSString * currentFilename;                    //@synthesize currentFilename=_currentFilename - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int linkType;                                //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) long long transferredByteCount;              //@synthesize transferredByteCount=_transferredByteCount - In the implementation block
@property (assign,nonatomic) long long totalByteCount;                    //@synthesize totalByteCount=_totalByteCount - In the implementation block
@property (assign,nonatomic) long long transferredFileCount;              //@synthesize transferredFileCount=_transferredFileCount - In the implementation block
@property (assign,nonatomic) long long totalFileCount;                    //@synthesize totalFileCount=_totalFileCount - In the implementation block
@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(int)linkType;
-(void)setLinkType:(int)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setCompressionRate:(double)arg1 ;
-(double)compressionRate;
-(void)setBytesPerSecond:(double)arg1 ;
-(void)setRemainingSeconds:(double)arg1 ;
-(void)setCurrentFilename:(NSString *)arg1 ;
-(void)setTransferredByteCount:(long long)arg1 ;
-(void)setTotalByteCount:(long long)arg1 ;
-(void)setTransferredFileCount:(long long)arg1 ;
-(void)setTotalFileCount:(long long)arg1 ;
-(double)bytesPerSecond;
-(double)remainingSeconds;
-(NSString *)currentFilename;
-(long long)transferredByteCount;
-(long long)totalByteCount;
-(long long)transferredFileCount;
-(long long)totalFileCount;
@end

