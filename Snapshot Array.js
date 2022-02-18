class SnapshotArray{
    constructor(length){
        this.snapshots = new Map();
        this.array = new Map();
        this.snapId = 0;
    };

    set(index, val) {
        this.array.set(index, val);
    };

    snap() {
        this.snapshots.set(this.snapId, new Map(this.array));
        
        return this.snapId++;
    };

    get(index, snap_id) {
        if(this.snapshots.get(snap_id).has(index)){
            return this.snapshots.get(snap_id).get(index);
        }
        
        return 0;
    };
}