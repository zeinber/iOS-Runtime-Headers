/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying> {
    NSString *_clientId;
    BOOL _establishmentCellularFallback;
    int _establishmentFailureError;
    BOOL _establishmentForcedTcpFallback;
    NSString *_establishmentInterfaceName;
    BOOL _establishmentSuccess;
    int _establishmentSynRetransmits;
    BOOL _establishmentTcpFallback;
    double _establishmentTime;
    struct { 
        unsigned int establishmentTime : 1; 
        unsigned int postConnectSessionLifetime : 1; 
        unsigned int timestamp : 1; 
        unsigned int establishmentFailureError : 1; 
        unsigned int establishmentSynRetransmits : 1; 
        unsigned int postConnectSubflowAttemptCount : 1; 
        unsigned int postConnectSubflowMaxSubflowCount : 1; 
        unsigned int subflowSwitchingCount : 1; 
        unsigned int establishmentCellularFallback : 1; 
        unsigned int establishmentForcedTcpFallback : 1; 
        unsigned int establishmentSuccess : 1; 
        unsigned int establishmentTcpFallback : 1; 
        unsigned int postConnectMultiHomed : 1; 
        unsigned int postConnectSingleHomed : 1; 
    } _has;
    NSMutableArray *_interfaceReports;
    BOOL _postConnectMultiHomed;
    double _postConnectSessionLifetime;
    BOOL _postConnectSingleHomed;
    int _postConnectSubflowAttemptCount;
    int _postConnectSubflowMaxSubflowCount;
    int _subflowSwitchingCount;
    NSMutableArray *_subflowSwitchingReports;
    unsigned long long _timestamp;
}

@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) BOOL establishmentCellularFallback;
@property (nonatomic) int establishmentFailureError;
@property (nonatomic) BOOL establishmentForcedTcpFallback;
@property (nonatomic, retain) NSString *establishmentInterfaceName;
@property (nonatomic) BOOL establishmentSuccess;
@property (nonatomic) int establishmentSynRetransmits;
@property (nonatomic) BOOL establishmentTcpFallback;
@property (nonatomic) double establishmentTime;
@property (nonatomic, readonly) BOOL hasClientId;
@property (nonatomic) BOOL hasEstablishmentCellularFallback;
@property (nonatomic) BOOL hasEstablishmentFailureError;
@property (nonatomic) BOOL hasEstablishmentForcedTcpFallback;
@property (nonatomic, readonly) BOOL hasEstablishmentInterfaceName;
@property (nonatomic) BOOL hasEstablishmentSuccess;
@property (nonatomic) BOOL hasEstablishmentSynRetransmits;
@property (nonatomic) BOOL hasEstablishmentTcpFallback;
@property (nonatomic) BOOL hasEstablishmentTime;
@property (nonatomic) BOOL hasPostConnectMultiHomed;
@property (nonatomic) BOOL hasPostConnectSessionLifetime;
@property (nonatomic) BOOL hasPostConnectSingleHomed;
@property (nonatomic) BOOL hasPostConnectSubflowAttemptCount;
@property (nonatomic) BOOL hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) BOOL hasSubflowSwitchingCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSMutableArray *interfaceReports;
@property (nonatomic) BOOL postConnectMultiHomed;
@property (nonatomic) double postConnectSessionLifetime;
@property (nonatomic) BOOL postConnectSingleHomed;
@property (nonatomic) int postConnectSubflowAttemptCount;
@property (nonatomic) int postConnectSubflowMaxSubflowCount;
@property (nonatomic) int subflowSwitchingCount;
@property (nonatomic, retain) NSMutableArray *subflowSwitchingReports;
@property (nonatomic) unsigned long long timestamp;

- (void)addInterfaceReports:(id)arg1;
- (void)addSubflowSwitchingReports:(id)arg1;
- (void)clearInterfaceReports;
- (void)clearSubflowSwitchingReports;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)establishmentCellularFallback;
- (int)establishmentFailureError;
- (BOOL)establishmentForcedTcpFallback;
- (id)establishmentInterfaceName;
- (BOOL)establishmentSuccess;
- (int)establishmentSynRetransmits;
- (BOOL)establishmentTcpFallback;
- (double)establishmentTime;
- (BOOL)hasClientId;
- (BOOL)hasEstablishmentCellularFallback;
- (BOOL)hasEstablishmentFailureError;
- (BOOL)hasEstablishmentForcedTcpFallback;
- (BOOL)hasEstablishmentInterfaceName;
- (BOOL)hasEstablishmentSuccess;
- (BOOL)hasEstablishmentSynRetransmits;
- (BOOL)hasEstablishmentTcpFallback;
- (BOOL)hasEstablishmentTime;
- (BOOL)hasPostConnectMultiHomed;
- (BOOL)hasPostConnectSessionLifetime;
- (BOOL)hasPostConnectSingleHomed;
- (BOOL)hasPostConnectSubflowAttemptCount;
- (BOOL)hasPostConnectSubflowMaxSubflowCount;
- (BOOL)hasSubflowSwitchingCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)interfaceReports;
- (id)interfaceReportsAtIndex:(unsigned int)arg1;
- (unsigned int)interfaceReportsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)postConnectMultiHomed;
- (double)postConnectSessionLifetime;
- (BOOL)postConnectSingleHomed;
- (int)postConnectSubflowAttemptCount;
- (int)postConnectSubflowMaxSubflowCount;
- (BOOL)readFrom:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setEstablishmentCellularFallback:(BOOL)arg1;
- (void)setEstablishmentFailureError:(int)arg1;
- (void)setEstablishmentForcedTcpFallback:(BOOL)arg1;
- (void)setEstablishmentInterfaceName:(id)arg1;
- (void)setEstablishmentSuccess:(BOOL)arg1;
- (void)setEstablishmentSynRetransmits:(int)arg1;
- (void)setEstablishmentTcpFallback:(BOOL)arg1;
- (void)setEstablishmentTime:(double)arg1;
- (void)setHasEstablishmentCellularFallback:(BOOL)arg1;
- (void)setHasEstablishmentFailureError:(BOOL)arg1;
- (void)setHasEstablishmentForcedTcpFallback:(BOOL)arg1;
- (void)setHasEstablishmentSuccess:(BOOL)arg1;
- (void)setHasEstablishmentSynRetransmits:(BOOL)arg1;
- (void)setHasEstablishmentTcpFallback:(BOOL)arg1;
- (void)setHasEstablishmentTime:(BOOL)arg1;
- (void)setHasPostConnectMultiHomed:(BOOL)arg1;
- (void)setHasPostConnectSessionLifetime:(BOOL)arg1;
- (void)setHasPostConnectSingleHomed:(BOOL)arg1;
- (void)setHasPostConnectSubflowAttemptCount:(BOOL)arg1;
- (void)setHasPostConnectSubflowMaxSubflowCount:(BOOL)arg1;
- (void)setHasSubflowSwitchingCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInterfaceReports:(id)arg1;
- (void)setPostConnectMultiHomed:(BOOL)arg1;
- (void)setPostConnectSessionLifetime:(double)arg1;
- (void)setPostConnectSingleHomed:(BOOL)arg1;
- (void)setPostConnectSubflowAttemptCount:(int)arg1;
- (void)setPostConnectSubflowMaxSubflowCount:(int)arg1;
- (void)setSubflowSwitchingCount:(int)arg1;
- (void)setSubflowSwitchingReports:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)subflowSwitchingCount;
- (id)subflowSwitchingReports;
- (id)subflowSwitchingReportsAtIndex:(unsigned int)arg1;
- (unsigned int)subflowSwitchingReportsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
